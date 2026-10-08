// DX10 bridge note: render-state initializer table includes D3DRS_CLIPPING=1 and D3DRS_CLIPPLANEENABLE=0; generated DX10 fixed-function VS must consume enabled clip planes via shader clip distances.
int __thiscall sub_77FE50(_DWORD *this)
{
  int result; // eax
  int *v3; // ecx
  int *v4; // esi
  int v5; // edx

  result = dword_B29FB8[0]; /*0x77fe50*/
  v3 = dword_B29FB8; /*0x77fe5b*/
  if ( dword_B29FB8[0] != 0xFFFFFFFF ) /*0x77fe60*/
  {
    v4 = dword_B29FB8; /*0x77fe64*/
    do /*0x77fe9a*/
    {
      v5 = v3[1]; /*0x77fe66*/
      *(this + 2 * result + 0x48) = v5; /*0x77fe69*/
      *(this + 2 * result + 0x49) = v5; /*0x77fe70*/
      (*(void (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*(this + 0x3FE) + 0xE4))(*(this + 0x3FE), *v3, v3[1]); /*0x77fe8d*/
      result = v4[2]; /*0x77fe8f*/
      v4 += 2; /*0x77fe92*/
      v3 = v4; /*0x77fe98*/
    }
    while ( result != 0xFFFFFFFF ); /*0x77fe9a*/
  }
  return result; /*0x77fe9e*/
}
