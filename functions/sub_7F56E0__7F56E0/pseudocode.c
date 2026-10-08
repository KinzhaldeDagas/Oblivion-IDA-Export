void __thiscall sub_7F56E0(RefractionShader *this)
{
  NiD3DVertexShader *v2; // ebp
  NiD3DVertexShader **v3; // esi
  NiD3DVertexShader *v4; // edi
  NiD3DPixelShader *v5; // edi
  UInt32 v6; // ebx
  volatile LONG *v7; // esi
  NiD3DPixelShader **v8; // ebx

  v2 = this->Vertex[0]; /*0x7f56eb*/
  v3 = (NiD3DVertexShader **)(this->Unk90[1] + 0x58); /*0x7f56f1*/
  v4 = *v3; /*0x7f56f5*/
  if ( *v3 != v2 ) /*0x7f56f9*/
  {
    if ( v4 ) /*0x7f56fd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7f5703*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v4)(v4, 1); /*0x7f5719*/
    }
    *v3 = v2; /*0x7f571d*/
    if ( v2 ) /*0x7f571f*/
      InterlockedIncrement((volatile LONG *)v2 + 1); /*0x7f5725*/
  }
  v5 = this->Pixel[0]; /*0x7f572b*/
  v6 = this->Unk90[1]; /*0x7f5731*/
  v7 = *(volatile LONG **)(v6 + 0x44); /*0x7f5737*/
  v8 = (NiD3DPixelShader **)(v6 + 0x44); /*0x7f573a*/
  if ( v7 != (volatile LONG *)v5 ) /*0x7f573f*/
  {
    if ( v7 ) /*0x7f5743*/
    {
      if ( !InterlockedDecrement(v7 + 1) ) /*0x7f5749*/
        (**(void (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x7f575f*/
    }
    *v8 = v5; /*0x7f5763*/
    if ( v5 ) /*0x7f5765*/
      InterlockedIncrement((volatile LONG *)v5 + 1); /*0x7f576b*/
  }
}
