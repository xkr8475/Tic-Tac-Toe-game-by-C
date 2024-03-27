void computer(int(*p)[3]) {
	static int count = 1;
	int row = 0, col = 0;

	switch (count) {
	case 1:
		p[1][1] = 1;
		count++;
		break;
		
	case 2:
		//반대쪽에 사람 돌이 있으면 다른곳 두기
		for (row = 0; row < 3; row++) {
			for (col = 0; col < 3; col++) {
				if (p[row][col] == 0 && p[2 - row][2 - col] != 2) {
					p[row][col] = 1;
					count++;
					return;
				}
			}
		}
		break;

	default:
		//공격우선 반대쪽에 내 돌이있으면 놓기
		for (row = 0; row < 3; row++) {
			for (col = 0; col < 3; col++) {
				if (p[row][col] == 0 && p[2 - row][2 - col] != 1) {
					p[row][col] = 1;
					return;
				}
			}
		}

		//수비하기 
		for (row = 0; row < 3; row++) {
			for (col = 0; col < 3; col++) {
				if (row == 0) {
					if (p[row][0] == 2 && p[row][1] == 2) {
						p[row][2] = 1;
						return;
					}
					if (p[row][1] == 2 && p[row][2] == 2) {
						p[row][0] = 1;
						return;
					}
					if (p[row][2] == 2 && p[row][0] == 2) {
						p[row][1] = 1;
						return;
					}
				}
				else if (row == 2) {
					if (p[row][0] == 2 && p[row][1] == 2) {
						p[row][2] = 1;
						return;
					}
					if (p[row][1] == 2 && p[row][2] == 2) {
						p[row][0] = 1;
						return;
					}
					if (p[row][2] == 2 && p[row][0] == 2) {
						p[row][1] = 1;
						return;
					}
				}

				if (col == 0) {
					if (p[0][col] == 2 && p[1][col] == 2) {
						p[2][col] = 1;
						return;
					}
					if (p[1][col] == 2 && p[2][col] == 2) {
						p[0][col] = 1;
						return;
					}
					if (p[2][col] == 2 && p[0][col] == 2) {
						p[1][col] = 1;
						return;
					}

				}
				else if (col == 2) {
					if (p[0][col] == 2 && p[1][col] == 2) {
						p[2][col] = 1;
						return;
					}
					if (p[1][col] == 2 && p[2][col] == 2) {
						p[0][col] = 1;
						return;
					}
					if (p[2][col] == 2 && p[0][col] == 2) {
						p[1][col] = 1;
						return;
					}

				}
			}
		}

		//비어있는 자리 착수
		//for (int row = 0; row < 3; row++) {
		//		for (int col = 0; col < 3; col++) {
		//			if (p[row][col] == 0) {
		//				p[row][col] = 1;
		//				return;
		//			}
		//		}
		//	}
	}
	
	//내 바로 옆에 돌이 없을 경우에만 놓겠다 . 추가하기 과제
	//if (p[row][col] == 0 && p[2 - row][2 - col] != 2)  or 로 추가

}