void __usercall sub_760860(int a1@<edi>, _DWORD *a2, int a3, int a4, int a5)
{
  signed int v5; // eax
  void *v6; // ecx
  signed int v7; // eax
  void *v8; // ecx
  unsigned int v9; // esi
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // edi
  int v13; // ebp
  unsigned int v14; // edi
  char *v15; // ebx
  char *v16; // esi
  unsigned int v17; // ebp
  size_t v18; // [esp+4h] [ebp-40h]
  int Size; // [esp+18h] [ebp-2Ch]
  unsigned int v20; // [esp+1Ch] [ebp-28h] BYREF
  void *Dst; // [esp+20h] [ebp-24h]
  int v22[7]; // [esp+24h] [ebp-20h] BYREF
  unsigned int v23; // [esp+40h] [ebp-4h]

  v5 = (*(int (__stdcall **)(int, int *))(*(_DWORD *)a4 + 0x30))(a4, v22);
  if ( v5 >= 0 )
  {
    v7 = (*(int (__stdcall **)(int, unsigned int *, _DWORD, _DWORD))(*(_DWORD *)a4 + 0x34))(a4, &v20, 0, 0);
    if ( v7 >= 0 )
    {
      v9 = v20;
      v10 = *(_DWORD *)(a2[0x15] + 4 * a3);
      v11 = *(_DWORD *)(a2[0x16] + 4 * a3);
      HIDWORD(v18) = a1;
      v12 = v10 * a2[0x19];
      if ( v11 > v23 )
        v11 = v23;
      v13 = a2[3];
      if ( v13 >= 4 && v13 <= 6 )
      {
        v9 = v20 >> 2;
        v14 = v10 + 3;
        if ( v22[0] == 0x31545844 )
          v12 = (v14 >> 1) & 0x7FFFFFE;
        else
          v12 = v14 & 0xFFFFFFC;
        v11 = (v11 + 3) & 0xFFFFFFC;
      }
      if ( v12 == v9 )
      {
        LODWORD(v18) = v12 * v11;
        memcpy(
          Dst,
          (const void *)(a2[0x14] + *(_DWORD *)(a2[0x17] + 4 * a3) + a5 * *(_DWORD *)(a2[0x17] + 4 * a2[0x18])),
          v18);
      }
      else
      {
        Size = v9;
        if ( v12 <= v9 )
          Size = v12;
        v15 = (char *)Dst;
        v16 = (char *)(a2[0x14] + *(_DWORD *)(a2[0x17] + 4 * a3) + a5 * *(_DWORD *)(a2[0x17] + 4 * a2[0x18]));
        if ( v11 )
        {
          v17 = v11;
          do
          {
            LODWORD(v18) = Size;
            memcpy(v15, v16, v18);
            v15 += v20;
            v16 += v12;
            --v17;
          }
          while ( v17 );
        }
      }
      (*(void (__stdcall **)(int))(*(_DWORD *)a4 + 0x38))(a4);
    }
    else
    {
      sub_7736F0(v7);
      TESTexture::ClearComponentReferences(v8);
    }
  }
  else
  {
    sub_7736F0(v5);
    TESTexture::ClearComponentReferences(v6);
  }
}
