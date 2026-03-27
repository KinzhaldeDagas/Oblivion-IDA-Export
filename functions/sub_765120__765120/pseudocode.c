char __thiscall sub_765120(_BYTE *this, _DWORD *a2, _DWORD *a3, int *a4, int *a5, int a6)
{
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  signed int v19; // eax
  void *v20; // ecx
  int v22; // [esp+8h] [ebp-20h] BYREF
  int v23; // [esp+Ch] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-18h]
  int v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h] BYREF
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int v29; // [esp+24h] [ebp-4h]

  if ( *(this + 0x6F0) )
    return 0;
  v7 = a3[4];
  v8 = a2[4];
  if ( v8 && v7 && (v9 = *(_DWORD *)(v8 + 0xC), v10 = *(_DWORD *)(v7 + 0xC), v9) && v10 )
  {
    if ( a4 )
    {
      v26 = *a4;
      v28 = a4[1];
      v11 = a4[3];
      v27 = a4[2];
    }
    else
    {
      v12 = a2[2];
      v11 = a2[3];
      v26 = 0;
      v28 = v12;
      v27 = 0;
    }
    v29 = v11;
    if ( a5 )
    {
      v13 = a5[1];
      v22 = *a5;
      v14 = a5[2];
      v24 = v13;
      v15 = a5[3];
      v23 = v14;
      v25 = v15;
    }
    else
    {
      v16 = a3[2];
      v17 = a3[3];
      v22 = 0;
      v24 = v16;
      v23 = 0;
      v25 = v17;
    }
    if ( a6 == 1 )
    {
      v18 = 1;
    }
    else if ( a6 == 2 )
    {
      v18 = 2;
    }
    else
    {
      v18 = 0;
    }
    v19 = (*(int (__stdcall **)(_DWORD, int, int *, int, int *, int))(**((_DWORD **)this + 0xA0) + 0x88))(
            *((_DWORD *)this + 0xA0),
            v9,
            &v26,
            v10,
            &v22,
            v18);
    if ( v19 >= 0 )
    {
      return 1;
    }
    else
    {
      sub_7736F0(v19);
      TESTexture::ClearComponentReferences(v20);
      return 0;
    }
  }
  else
  {
    TESTexture::ClearComponentReferences(a3);
    return 0;
  }
}
