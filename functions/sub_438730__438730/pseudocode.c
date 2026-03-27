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

  v1 = a1;
  if ( a1 )
  {
    v8[0] = "Bip01 Spine2";
    v8[1] = "Bip01 Spine1";
    v8[2] = "Bip01 Spine";
    for ( i = 0; i < 3; ++i )
    {
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 0x58))(v1, v8[i]);
      v4 = (NiAVObject *)v3;
      if ( v3 )
      {
        if ( *(_DWORD *)(v3 + 0xA8) )
        {
          v5 = NiRTTI_Cast((BSStringT *)dword_BA7A20, *(NiObject **)(v3 + 0xA8));
          if ( v5 )
          {
            v6 = (float *)FormHeapAlloc(0x4Cu);
            v7 = 0;
            v9 = 0;
            if ( v6 )
              v7 = sub_88E7C0(v6);
            v9 = 0xFFFFFFFF;
            sub_88E880(v7, (int)v5);
            sub_435CE0(v4, (volatile LONG *)v7);
            v1 = a1;
          }
        }
      }
    }
  }
}
