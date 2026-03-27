void sub_4D5600()
{
  float v0; // ecx
  float v1; // edx
  bhkWorld *v2; // esi
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v0 = *(&Vector3_InitValue_ + 1);
  v1 = dword_B3F9B0;
  v5[0] = Vector3_InitValue_;
  v5[1] = v0;
  v5[2] = v1;
  dword_B35C00 = 0;
  v2 = sub_4D5000(v5);
  v3 = bhkWorldM;
  if ( (bhkWorld *)bhkWorldM != v2 )
  {
    if ( v3 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))bhkWorldM;
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**v4)(v4, 1);
    }
    bhkWorldM = (int)v2;
    if ( v2 )
      InterlockedIncrement((volatile LONG *)&v2->members);
  }
  if ( flt_A2FF44 < (double)fSeenDataUpdateRadius[0] )
    fSeenDataUpdateRadius[0] = flt_A2FF44;
}
