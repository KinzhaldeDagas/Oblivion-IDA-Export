void __thiscall sub_712F10(int **this)
{
  void (__cdecl *v2)(int, int **, int, LONG *, int); // eax
  unsigned int v3; // ebx
  void (__cdecl *v4)(int, int *, int, LONG *, int); // edx
  LONG v5; // esi
  int v6; // [esp-14h] [ebp-40h]
  int v7; // [esp-14h] [ebp-40h]
  int *v8; // [esp+14h] [ebp-18h] BYREF
  LONG v9; // [esp+18h] [ebp-14h] BYREF
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v11; // [esp+28h] [ebp-4h]

  v6 = (int)*(this + 0x87); /*0x712f4d*/
  v2 = *(void (__cdecl **)(int, int **, int, LONG *, int))(v6 + 4); /*0x712f4e*/
  v9 = 4; /*0x712f51*/
  v2(v6, &v8, 4, &v9, 1); /*0x712f59*/
  sub_8BCA30(this + 0x81, v8); /*0x712f6b*/
  v3 = 0; /*0x712f70*/
  if ( v8 ) /*0x712f76*/
  {
    do /*0x713009*/
    {
      v4 = (void (__cdecl *)(int, int *, int, LONG *, int))(*(this + 0x87))[1]; /*0x712f89*/
      v7 = (int)*(this + 0x87); /*0x712f93*/
      v9 = 4; /*0x712f94*/
      v4(v7, &v10, 4, &v9, 1); /*0x712f9c*/
      if ( v10 == 0xFFFFFFFF ) /*0x712fa8*/
        v5 = 0; /*0x712faa*/
      else
        v5 = (*(this + 0x7C))[v10]; /*0x712fb4*/
      v9 = v5; /*0x712fb9*/
      if ( v5 ) /*0x712fbd*/
        InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x712fc3*/
      v11 = 0; /*0x712fd1*/
      sub_8BCD40(this + 0x81, v3, &v9); /*0x712fd9*/
      v11 = 0xFFFFFFFF; /*0x712fe0*/
      if ( v5 ) /*0x712fe8*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x712fee*/
          (**(void (__thiscall ***)(LONG, int))v5)(v5, 1); /*0x713000*/
      }
      ++v3; /*0x713002*/
    }
    while ( v3 < (unsigned int)v8 ); /*0x713009*/
  }
}
