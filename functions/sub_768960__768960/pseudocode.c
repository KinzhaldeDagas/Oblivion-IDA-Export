void __thiscall sub_768960(_DWORD *this, int a2)
{
  int v2; // ecx
  int v3; // ebx
  unsigned int i; // edi
  NiD3DPass *v5; // esi
  NiDX9RenderState *v6; // eax

  v2 = *(this + 0x2A5);
  if ( v2 )
  {
    v3 = v2;
    for ( i = 0; i < *(_DWORD *)(v3 + 0x38); ++i )
    {
      v5 = *(NiD3DPass **)(*(_DWORD *)(v3 + 0x44) + 4 * i);
      if ( v5 )
      {
        ++v5->RefCount;
        v6 = sub_75F9D0();
        if ( v6 )
          ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD))v6->vtbl->SetFVF)(v6, a2, 0);
        if ( v5->RefCount-- == 1 )
          sub_7604D0(v5);
      }
    }
  }
}
