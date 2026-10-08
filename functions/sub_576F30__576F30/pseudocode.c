float *__thiscall sub_576F30(float *this, signed int a2, char a3, int a4, int a5, int a6, int a7, int a8)
{
  signed int v9; // eax
  int v10; // edi
  int v11; // eax
  float *v12; // edi
  double v13; // st7
  bool v14; // c3
  double v15; // st7
  int v16; // eax
  int v17; // ebp
  _DWORD *Singleton; // eax

  *(this + 2) = 0.0; /*0x576f5f*/
  *(this + 3) = 0.0; /*0x576f62*/
  *(this + 4) = 0.0; /*0x576f65*/
  *(this + 5) = 0.0; /*0x576f68*/
  *(this + 7) = 0.0; /*0x576f6b*/
  *((_WORD *)this + 0x10) = 0; /*0x576f6e*/
  *((_WORD *)this + 0x11) = 0; /*0x576f72*/
  if ( a2 >= 5 )
    v9 = 5; /*0x576f91*/
  else
    v9 = a2 < 0 ? 0 : a2;
  *(_DWORD *)this = v9; /*0x576f9e*/
  *((_DWORD *)this + 2) = a4; /*0x576fa4*/
  *((_DWORD *)this + 3) = a5; /*0x576fab*/
  *((_BYTE *)this + 4) = a3; /*0x576fb2*/
  *((_DWORD *)this + 4) = a6; /*0x576fb9*/
  *((_DWORD *)this + 5) = a7; /*0x576fbc*/
  *((_DWORD *)this + 6) = a8; /*0x576fbf*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x576fc6*/
  *(this + 7) = 0.0; /*0x576fcb*/
  *((_WORD *)this + 0x11) = 0; /*0x576fce*/
  *((_WORD *)this + 0x10) = 0; /*0x576fd2*/
  v10 = *(_DWORD *)this; /*0x576fd6*/
  v11 = *(_DWORD *)(FontManager_GetSingleton()[v10] + 0x38); /*0x576ff0*/
  v12 = (float *)(v11 + 0x38 * *((unsigned __int8 *)this + 4) + 0x128); /*0x576ff3*/
  v13 = *(float *)(v11 + 0x38 * *((unsigned __int8 *)this + 4) + 0x14C); /*0x576ffa*/
  v14 = 0.0 == v13 + v13; /*0x577001*/
  v15 = 0.0; /*0x577005*/
  if ( !v14 ) /*0x57700a*/
    v15 = v12[0xC] + v12[0xB]; /*0x577011*/
  v16 = Double_To_SInt32(v15); /*0x577014*/
  v17 = *(_DWORD *)this; /*0x577019*/
  *((_DWORD *)this + 9) = v16; /*0x57701b*/
  Singleton = FontManager_GetSingleton(); /*0x57701e*/
  *((_DWORD *)this + 0xA) = Double_To_SInt32(**(float **)(Singleton[v17] + 0x38)); /*0x577030*/
  *((_DWORD *)this + 0xB) = Double_To_SInt32(v12[0xA] - v12[0xD]); /*0x57703e*/
  *(this + 0xC) = 0.0; /*0x577041*/
  *(this + 0xD) = 0.0; /*0x577044*/
  return this; /*0x577049*/
}
