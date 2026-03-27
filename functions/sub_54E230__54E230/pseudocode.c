void __thiscall sub_54E230(_DWORD *this, unsigned int a2, int *a3)
{
  int v3; // edx
  char *v5; // edi
  bool v6; // cc
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ebx
  char *v10; // edi
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12[4]; // [esp+10h] [ebp-10h] BYREF

  v3 = a3[1];
  v5 = (char *)*(this + 2);
  v6 = *(this + 1) <= (unsigned int)v5;
  v12[0] = *a3;
  v7 = a3[2];
  v12[1] = v3;
  v8 = a3[3];
  v12[2] = v7;
  v12[3] = v8;
  if ( !v6 )
    _invalid_parameter_noinfo();
  v9 = *(this + 1);
  if ( v9 > *(this + 2) )
    _invalid_parameter_noinfo();
  sub_6F14D0(this, &v11, (int)this, v9, (int)this, v5);
  v10 = (char *)*(this + 1);
  if ( (unsigned int)v10 > *(this + 2) )
    _invalid_parameter_noinfo();
  sub_54DFD0(this, (int)this, v10, a2, v12);
}
