_BYTE *__thiscall AVCollection_GetNode(_DWORD *this, int a2)
{
  _BYTE *v2; // esi
  _BYTE *result; // eax
  _BYTE **v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  _DWORD *i; // edx

  v2 = 0;
  switch ( (char)a2 )
  {
    case 0:
      v19 = *(this + 4);
      if ( !v19 )
        goto LABEL_47;
      result = *(_BYTE **)(v19 + 0x3C);
      break;
    case 4:
      v20 = *(this + 4);
      if ( !v20 )
        goto LABEL_47;
      result = *(_BYTE **)(v20 + 0x40);
      break;
    case 5:
      v17 = *(this + 4);
      if ( !v17 )
        goto LABEL_47;
      result = *(_BYTE **)(v17 + 0x34);
      break;
    case 6:
      v10 = *(this + 4);
      if ( !v10 )
        goto LABEL_47;
      result = *(_BYTE **)(v10 + 0x18);
      break;
    case 7:
      v18 = *(this + 4);
      if ( !v18 )
        goto LABEL_47;
      result = *(_BYTE **)(v18 + 0x38);
      break;
    case 8:
      v4 = (_BYTE **)*(this + 4);
      if ( !v4 )
        goto LABEL_47;
      result = *v4;
      break;
    case 9:
      result = (_BYTE *)*(this + 2);
      break;
    case 0xA:
      result = (_BYTE *)*(this + 3);
      break;
    case 0xB:
      v5 = *(this + 4);
      if ( !v5 )
        goto LABEL_47;
      result = *(_BYTE **)(v5 + 4);
      break;
    case 0xD:
      v21 = *(this + 4);
      if ( !v21 )
        goto LABEL_47;
      result = *(_BYTE **)(v21 + 0x44);
      break;
    case 0x1A:
      v16 = *(this + 4);
      if ( !v16 )
        goto LABEL_47;
      result = *(_BYTE **)(v16 + 0x30);
      break;
    case 0x21:
      v15 = *(this + 4);
      if ( !v15 )
        goto LABEL_47;
      result = *(_BYTE **)(v15 + 0x2C);
      break;
    case 0x24:
      v8 = *(this + 4);
      if ( !v8 )
        goto LABEL_47;
      result = *(_BYTE **)(v8 + 0x10);
      break;
    case 0x28:
      v6 = *(this + 4);
      if ( !v6 )
        goto LABEL_47;
      result = *(_BYTE **)(v6 + 8);
      break;
    case 0x29:
      v14 = *(this + 4);
      if ( !v14 )
        goto LABEL_47;
      result = *(_BYTE **)(v14 + 0x28);
      break;
    case 0x2E:
      v12 = *(this + 4);
      if ( !v12 )
        goto LABEL_47;
      result = *(_BYTE **)(v12 + 0x20);
      break;
    case 0x2F:
      v13 = *(this + 4);
      if ( !v13 )
        goto LABEL_47;
      result = *(_BYTE **)(v13 + 0x24);
      break;
    case 0x30:
      v7 = *(this + 4);
      if ( !v7 )
        goto LABEL_47;
      result = *(_BYTE **)(v7 + 0xC);
      break;
    case 0x31:
      v9 = *(this + 4);
      if ( !v9 )
        goto LABEL_47;
      result = *(_BYTE **)(v9 + 0x14);
      break;
    case 0x38:
      v11 = *(this + 4);
      if ( v11 )
        result = *(_BYTE **)(v11 + 0x1C);
      else
LABEL_47:
        result = (_BYTE *)AVCollection_GetNode_::Return_0(a2);
      break;
    default:
      for ( i = this; i; i = (_DWORD *)i[1] )
      {
        if ( !*i )
          break;
        if ( v2 )
          break;
        if ( *(_BYTE *)*i == (_BYTE)a2 )
          v2 = (_BYTE *)*i;
      }
      result = v2;
      break;
  }
  return result;
}
