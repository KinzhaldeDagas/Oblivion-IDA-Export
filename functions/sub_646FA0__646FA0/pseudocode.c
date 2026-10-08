double __thiscall sub_646FA0(TESPackage **this, TESObjectREFR *a2)
{
  double result; // st7
  TESPackage *v4; // ecx
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+0h] [ebp-4h]

  result = flt_A2FFE8; /*0x646fa1*/
  v4 = *(this + 2); /*0x646fa9*/
  v5 = flt_A2FFE8; /*0x646fac*/
  if ( v4 ) /*0x646fb1*/
  {
    switch ( *(_DWORD *)(*(_DWORD *)(4 * v4->members.procedureArrayIndex + 0xB152B0) + 4 * (_DWORD)*(this + 1)) ) /*0x646fd1*/
    {
      case 0: /*0x646fd1*/
        if ( !v4->members.location ) /*0x646fdc*/
          goto LABEL_9; /*0x646fdc*/
        v6 = sub_5677B0(v4, result, a2, 1); /*0x646fea*/
        result = v6; /*0x646fed*/
        break; /*0x646ff1*/
      case 1: /*0x646fd1*/
      case 2: /*0x646fd1*/
      case 3: /*0x646fd1*/
      case 8: /*0x646fd1*/
      case 0xE: /*0x646fd1*/
      case 0xF: /*0x646fd1*/
        if ( !v4->members.target ) /*0x646ff8*/
          goto LABEL_9; /*0x646ff8*/
        v7 = sub_5677B0(v4, result, a2, 2); /*0x647006*/
        result = v7; /*0x647009*/
        break; /*0x64700d*/
      case 6: /*0x646fd1*/
      case 7: /*0x646fd1*/
      case 0xD: /*0x646fd1*/
      case 0x20: /*0x646fd1*/
        if ( v4->members.target ) /*0x647010*/
          v5 = sub_5677B0(v4, result, a2, 2); /*0x647022*/
        goto LABEL_9; /*0x647022*/
      default:
LABEL_9:
        result = v5; /*0x647025*/
        break; /*0x647025*/
    }
  }
  return result; /*0x646ff1*/
}
