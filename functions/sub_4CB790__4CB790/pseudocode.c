void __usercall sub_4CB790(int a1@<ecx>, double a2@<st0>, double a3@<st2>, double a4@<st1>)
{
  int *v6; // esi

  sub_496EA0((char *)&unk_B35C80, (TESObjectCELL *)a1); /*0x4cb79a*/
  v6 = (int *)(a1 + 0x48); /*0x4cb7a1*/
  sub_6786A0(&qword_B3BB2C[0x75], (int *)(a1 + 0x48), 0); /*0x4cb7aa*/
  sub_496F50(&unk_B35C80, (TESObjectCELL *)a1); /*0x4cb7b5*/
  sub_496EA0((char *)&unk_B35C80, (TESObjectCELL *)a1); /*0x4cb7c0*/
  if ( a1 != 0xFFFFFFB8 ) /*0x4cb7c7*/
  {
    do /*0x4cb7e0*/
    {
      if ( *v6 ) /*0x4cb7d0*/
        sub_4DC100(*v6, a2, a3, a4); /*0x4cb7d6*/
      v6 = (int *)v6[1]; /*0x4cb7db*/
    }
    while ( v6 ); /*0x4cb7e0*/
  }
  sub_496F50(&unk_B35C80, (TESObjectCELL *)a1); /*0x4cb7e8*/
}
