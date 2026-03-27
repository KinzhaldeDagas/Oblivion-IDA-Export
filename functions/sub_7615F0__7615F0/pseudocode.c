void __thiscall sub_7615F0(int this)
{
  int v2; // edi
  Ni2DBuffer *v3; // eax
  bool v4; // dl
  NiDX92DBufferData *data; // ecx
  bool v6; // zf
  NiDevImageConverter *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebx

  if ( !*(_BYTE *)(this + 0x64) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 4) + 0x3C);
    if ( v2 )
    {
      v3 = *(Ni2DBuffer **)(v2 + 0x4C);
      v4 = 0;
      if ( v3 )
      {
        data = v3->members.data;
        v4 = *(_DWORD *)(this + 0x78) != (_DWORD)data;
        v6 = *(_DWORD *)(this + 0x6C) == (_DWORD)v3;
        *(_DWORD *)(this + 0x78) = data;
        if ( !v6 )
        {
          NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x6C), v3);
          v4 = 1;
        }
      }
      if ( *(_DWORD *)(v2 + 0x68) != *(_DWORD *)(this + 0x74) || v4 )
      {
        v7 = sub_71B280();
        v8 = (_DWORD *)(*(int (__thiscall **)(NiDevImageConverter *, int, int, int, _DWORD))(*(_DWORD *)v7 + 0x10))(
                         v7,
                         v2,
                         this + 0xC,
                         v2,
                         *(unsigned __int8 *)(this + 0x65));
        v6 = *(_DWORD *)(this + 4) == 0;
        v9 = v8;
        *(_DWORD *)(this + 0x74) = *(_DWORD *)(v2 + 0x68);
        if ( !v6 )
          sub_760CC0((NiDX9SourceTextureData *)this, v8);
        if ( v9 )
        {
          InterlockedIncrement(v9 + 1);
          if ( !InterlockedDecrement(v9 + 1) )
            (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1);
        }
      }
    }
  }
}
