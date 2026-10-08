void __thiscall sub_768960(_DWORD *this, int a2)
{
  int v2; // ecx
  int v3; // ebx
  unsigned int i; // edi
  NiD3DPass *v5; // esi
  NiDX9RenderState *v6; // eax

  v2 = *(this + 0x2A5); /*0x768960*/
  if ( v2 ) /*0x768968*/
  {
    v3 = v2; /*0x77a9b2*/
    for ( i = 0; i < *(_DWORD *)(v3 + 0x38); ++i ) /*0x77a9b6*/
    {
      v5 = *(NiD3DPass **)(*(_DWORD *)(v3 + 0x44) + 4 * i); /*0x77a9c3*/
      if ( v5 ) /*0x77a9c8*/
      {
        ++v5->RefCount; /*0x77a9ca*/
        v6 = sub_75F9D0(); /*0x77a9d0*/
        if ( v6 ) /*0x77a9d7*/
          ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD))v6->vtbl->SetFVF)(v6, a2, 0); /*0x77a9ea*/
        if ( v5->RefCount-- == 1 ) /*0x77a9ec*/
          NiD3DPass_ReleaseToPool(v5); /*0x77a9f4*/
      }
    }
  }
}
