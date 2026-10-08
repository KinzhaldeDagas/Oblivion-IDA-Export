BSExtraDataVtbl *__thiscall sub_646E60(TESChildCELL **this, TESChildCELL *a2)
{
  int v3; // ecx
  BSExtraDataVtbl *result; // eax
  TESChildCELL *v5; // ecx

  v3 = (int)*(this + 2); /*0x646e62*/
  result = 0; /*0x646e65*/
  if ( v3 ) /*0x646e69*/
  {
    switch ( *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(v3 + 0x18) + 0xB152B0) + 4 * (_DWORD)*(this + 1)) ) /*0x646e8c*/
    {
      case 0: /*0x646e8c*/
      case 4: /*0x646e8c*/
      case 5: /*0x646e8c*/
      case 7: /*0x646e8c*/
        if ( !*(_DWORD *)(v3 + 0x24) ) /*0x646e96*/
          goto LABEL_6; /*0x646e96*/
        result = sub_566A40((char **)v3, (Actor *)a2); /*0x646e9a*/
        break; /*0x646e9a*/
      case 1: /*0x646e8c*/
      case 2: /*0x646e8c*/
      case 3: /*0x646e8c*/
      case 6: /*0x646e8c*/
      case 8: /*0x646e8c*/
      case 0xD: /*0x646e8c*/
      case 0xE: /*0x646e8c*/
      case 0xF: /*0x646e8c*/
      case 0x20: /*0x646e8c*/
        v5 = *(this + 0xB); /*0x646e9f*/
        if ( v5 ) /*0x646ea4*/
          goto LABEL_7; /*0x646ea4*/
        goto LABEL_6; /*0x646ea4*/
      case 0x1D: /*0x646e8c*/
      case 0x2C: /*0x646e8c*/
LABEL_6:
        v5 = a2; /*0x646ea6*/
LABEL_7:
        result = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(v5); /*0x646eaa*/
        break; /*0x646eaa*/
      default:
        return result;
    }
  }
  return result; /*0x646e6b*/
}
