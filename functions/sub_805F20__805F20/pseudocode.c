void __thiscall sub_805F20(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // edi
  BOOL v10; // eax
  _DWORD *v11; // ebx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  float v15; // [esp+18h] [ebp-1Ch]
  float v16; // [esp+1Ch] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-18h]
  float v18; // [esp+20h] [ebp-14h]
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+24h] [ebp-10h]
  _DWORD *v22; // [esp+44h] [ebp+10h]

  v9 = *(_DWORD *)(a5 + 0x18);
  if ( v9 )
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v9 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 3;
  else
    v10 = 0;
  v11 = v10 ? (_DWORD *)v9 : 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 0x80))(this);
  v22 = sub_7EE1D0(v11);
  v12 = *(this + 0x25);
  if ( a3 != 0 )
  {
    *(_BYTE *)(v12 + 8) = 0;
    *(_BYTE *)(*(this + 0x26) + 8) = 1;
    *(_BYTE *)(*(this + 0x27) + 8) = 1;
  }
  else
  {
    *(_BYTE *)(v12 + 8) = 1;
    *(_BYTE *)(*(this + 0x26) + 8) = 0;
    *(_BYTE *)(*(this + 0x27) + 8) = 0;
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xC) + 0x48))(*(this + 0xC));
  switch ( *((_BYTE *)v22 + 0x44) )
  {
    case 0:
      v15 = 0.0;
      v16 = flt_A3D65C;
      *(float *)&v20 = v16;
      v18 = 0.0;
      goto LABEL_9;
    case 1:
      *(float *)&v13 = flt_A3D65C;
      *(float *)&dword_B46198 = flt_A3D65C;
      dword_B4619C = v13;
      *(float *)&dword_B461A0 = 0.0;
      dword_B461A4 = v13;
      goto LABEL_14;
    case 2:
      v14 = flt_A3D65C;
      *(float *)&v17 = flt_A3D65C;
      *(float *)&dword_B46198 = 0.0;
      *(float *)&v19 = v14;
      *(float *)&v21 = v14;
      dword_B4619C = v17;
      dword_B461A0 = v19;
      dword_B461A4 = v21;
      goto LABEL_14;
    case 3:
      v15 = flt_A3D65C;
      v16 = v15;
      v18 = v15;
      *(float *)&v20 = v15;
LABEL_9:
      *(float *)&dword_B46198 = v15;
      *(float *)&dword_B4619C = v16;
      *(float *)&dword_B461A0 = v18;
      dword_B461A4 = v20;
LABEL_14:
      JUMPOUT(0x8060ED);
    default:
      JUMPOUT(0x8060D8);
  }
}
