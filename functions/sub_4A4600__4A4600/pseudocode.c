_DWORD *__stdcall sub_4A4600(int a1)
{
  _BYTE *v1; // eax
  _DWORD *result; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // [esp+14h] [ebp+4h]

  switch ( a1 )
  {
    case 3:
      v1 = (_BYTE *)FormHeapAlloc(0x10u);
      v7 = v1;
      if ( !v1 )
        goto LABEL_12;
      result = sub_4A5610(v1);
      break;
    case 4:
      v3 = (_BYTE *)FormHeapAlloc(0x10u);
      v7 = v3;
      if ( !v3 )
        goto LABEL_12;
      result = sub_4A4A80(v3);
      break;
    case 5:
      v4 = (_BYTE *)FormHeapAlloc(0xCu);
      v7 = v4;
      if ( !v4 )
        goto LABEL_12;
      result = sub_4A3CD0(v4);
      break;
    case 6:
      v5 = (_BYTE *)FormHeapAlloc(0xCu);
      v7 = v5;
      if ( !v5 )
        goto LABEL_12;
      result = sub_4A35E0(v5);
      break;
    case 7:
      v6 = (_BYTE *)FormHeapAlloc(0x14u);
      v7 = v6;
      if ( v6 )
        result = sub_4A55C0(v6);
      else
LABEL_12:
        result = (_DWORD *)def_4A4632(v7);
      break;
    default:
      JUMPOUT(0x4A4742);
  }
  return result;
}
