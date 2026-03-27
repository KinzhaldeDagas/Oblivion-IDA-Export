void __usercall sub_4CB790(int a1@<ecx>, double a2@<st0>, double a3@<st2>, double a4@<st1>, char a5@<bpl>)
{
  int *v6; // esi

  sub_496EA0((char *)&stru_B35C80, (TESObjectCELL *)a1);
  v6 = (int *)(a1 + 0x48);
  sub_6786A0(&ActorProcessManager_ptr, a3, a4, a2, (int *)(a1 + 0x48), 0);
  sub_496F50(&stru_B35C80, (TESObjectCELL *)a1);
  sub_496EA0((char *)&stru_B35C80, (TESObjectCELL *)a1);
  if ( a1 != 0xFFFFFFB8 )
  {
    do
    {
      if ( *v6 )
        sub_4DC100(*v6, a2, a3, a4, a5);
      v6 = (int *)v6[1];
    }
    while ( v6 );
  }
  sub_496F50(&stru_B35C80, (TESObjectCELL *)a1);
}
