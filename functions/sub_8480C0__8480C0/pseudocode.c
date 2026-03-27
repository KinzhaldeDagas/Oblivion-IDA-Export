void __thiscall sub_8480C0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // esi
  NiD3DPassVtbl **v7; // ecx
  NiD3DPass *v9; // [esp-8h] [ebp-28h]
  NiD3DPass *v10; // [esp+10h] [ebp-10h] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-4h]

  v6 = (NiD3DPass *)dword_B455B8;
  v7 = (NiD3DPassVtbl **)dword_B455B8;
  if ( flt_B44EE4 <= 0.0 )
  {
    sub_7AEC60(v7, (NiD3DPixelShader *)dword_B4522C);
    sub_7AECB0(v6, (NiD3DVertexShader *)dword_B45434);
  }
  else
  {
    sub_7AEC60(v7, (NiD3DPixelShader *)dword_B4523C);
    sub_7AECB0(v6, (NiD3DVertexShader *)dword_B45444);
  }
  v10 = v6;
  if ( v6 )
    ++v6->RefCount;
  v9 = *((NiD3DPass **)this + 0xE);
  v11 = 0;
  sub_76CE40(this + 4, v9, &v10);
  v11 = 0xFFFFFFFF;
  if ( v6 )
  {
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
  }
  ++*((_DWORD *)this + 0xE);
}
