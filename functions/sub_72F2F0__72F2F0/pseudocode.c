void __thiscall sub_72F2F0(_DWORD *this, int a2)
{
  int v3; // eax
  float *v4; // esi
  bool v5; // zf
  int v6; // edi
  int v7; // ecx
  unsigned int v8; // ebx
  float *v9; // esi
  int v10; // eax
  float *v11; // ecx
  unsigned int v12; // edx
  bool v13; // cf
  int v14; // [esp+14h] [ebp-1Ch]
  float *v15; // [esp+18h] [ebp-18h] BYREF
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+2Ch] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v5 = *(this + 0x10) == 0;
  v18 = 0;
  v14 = 0;
  if ( !v5 )
  {
    v6 = 0;
    do
    {
      v7 = *(this + 0x11);
      v8 = 0;
      if ( *(_WORD *)(v6 + v7 + 0x48) )
      {
        do
        {
          v9 = (float *)(a2 + 0xC * *(unsigned __int16 *)(*(_DWORD *)(v6 + v7 + 0x44) + 8 * v8));
          if ( v3 == v16 )
          {
            v10 = 2 * v16;
            if ( !v16 )
              v10 = 1;
            sub_72F0F0((unsigned int *)&v15, v10);
            v3 = v17;
          }
          v11 = &v15[3 * v3];
          *v11 = *v9;
          v11[1] = v9[1];
          v11[2] = v9[2];
          v7 = *(this + 0x11);
          v12 = *(unsigned __int16 *)(v6 + v7 + 0x48);
          ++v3;
          ++v8;
          v17 = v3;
        }
        while ( v8 < v12 );
        v4 = v15;
      }
      sub_72A0F0((float *)(v6 + *(this + 0x11) + 0x34), v3, v4);
      sub_72A820(
        (float *)(v6 + *(this + 0x11) + 0x34),
        (NiPoint3 *)(v6 + *(this + 0x11) + 0x34),
        (NiTransform *)(v6 + *(this + 0x11)));
      v3 = 0;
      v6 += 0x4C;
      v13 = (unsigned int)(v14 + 1) < *(this + 0x10);
      v17 = 0;
      ++v14;
    }
    while ( v13 );
  }
  FormHeapFree((unsigned int)v4);
}
