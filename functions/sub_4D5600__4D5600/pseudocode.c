void sub_4D5600()
{
  float y; // ecx
  float z; // edx
  bhkWorld *v2; // esi
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  y = g_zeroNiPoint3.y; /*0x4d5608*/
  z = g_zeroNiPoint3.z; /*0x4d560e*/
  v5[0] = g_zeroNiPoint3.x; /*0x4d5614*/
  v5[1] = y; /*0x4d561c*/
  v5[2] = z; /*0x4d5620*/
  unk_B35C00 = 0; /*0x4d5624*/
  v2 = sub_4D5000(v5); /*0x4d5633*/
  v3 = MEMORY[0xB35C24]; /*0x4d5635*/
  if ( (bhkWorld *)MEMORY[0xB35C24] != v2 ) /*0x4d563f*/
  {
    if ( v3 ) /*0x4d5643*/
    {
      v4 = (void (__thiscall ***)(_DWORD, int))MEMORY[0xB35C24]; /*0x4d5646*/
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x4d564c*/
        (**v4)(v4, 1); /*0x4d5662*/
    }
    MEMORY[0xB35C24] = (int)v2; /*0x4d5667*/
    if ( v2 ) /*0x4d566d*/
      InterlockedIncrement((volatile LONG *)&v2->members); /*0x4d5673*/
  }
  if ( flt_A2FF44 < (double)MEMORY[0xB35C14][0] ) /*0x4d568b*/
    MEMORY[0xB35C14][0] = flt_A2FF44; /*0x4d568d*/
}
