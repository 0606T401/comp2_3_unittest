#pragma once // �C���N���[�h�K�[�h

#include <stdbool.h>

// C++ ��C�̃��C�u�������g���Ƃ��̂��܂��Ȃ�
#ifdef __cplusplus
extern "C" {
#endif


	// 2�̐������������ł����H
	bool is_same(int val1, int val2);

	// val1 ���� val3 �̔C�ӂ̑g�ݍ��킹�Œl�̘a��sum�ɂȂ�g�ݍ��킹�͉�����܂����H
	int calc_combinations_3(int sum, int val1, int val2, int val3);


// C++ ��C�̃��C�u�������g���Ƃ��̂��܂��Ȃ�
#ifdef __cplusplus
} // extern "C"
#endif
