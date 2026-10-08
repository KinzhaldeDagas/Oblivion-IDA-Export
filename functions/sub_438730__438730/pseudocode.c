void __stdcall sub_438730(int a1)
{
  int v1; // esi
  int i; // ebp
  int v3; // eax
  NiAVObject *v4; // edi
  NiObject *v5; // ebx
  float *v6; // eax
  float *v7; // esi
  _DWORD v8[3]; // [esp+18h] [ebp-18h]
  unsigned int v9; // [esp+2Ch] [ebp-4h]

  v1 = a1; /*0x438757*/
  if ( a1 ) /*0x43875d*/
  {
    v8[0] = "Bip01 Spine2"; /*0x438763*/
    v8[1] = "Bip01 Spine1"; /*0x43876b*/
    v8[2] = "Bip01 Spine"; /*0x438773*/
    for ( i = 0; i < 3; ++i ) /*0x43877b*/
    {
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 0x58))(v1, v8[i]); /*0x438789*/
      v4 = (NiAVObject *)v3; /*0x43878b*/
      if ( v3 ) /*0x43878f*/
      {
        if ( *(_DWORD *)(v3 + 0xA8) ) /*0x438791*/
        {
          v5 = NiRTTI_Cast((BSStringT *)&MEMORY[0xBA7A20], *(NiObject **)(v3 + 0xA8)); /*0x4387a6*/
          if ( v5 ) /*0x4387ad*/
          {
            v6 = (float *)FormHeapAlloc(0x4Cu); /*0x4387b1*/
            v7 = 0; /*0x4387bd*/
            v9 = 0; /*0x4387c1*/
            if ( v6 ) /*0x4387c5*/
              v7 = sub_88E7C0(v6); /*0x4387ce*/
            v9 = 0xFFFFFFFF; /*0x4387d3*/
            sub_88E880(v7, (int)v5); /*0x4387db*/
            sub_435CE0(v4, (volatile LONG *)v7); /*0x4387e3*/
            v1 = a1; /*0x4387e8*/
          }
        }
      }
    }
  }
}
