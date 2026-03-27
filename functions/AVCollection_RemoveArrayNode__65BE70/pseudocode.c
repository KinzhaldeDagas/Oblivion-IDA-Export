unsigned int *__thiscall AVCollection_RemoveArrayNode(unsigned int **this, int a2)
{
  unsigned int *result; // eax
  _DWORD *v4; // esi

  result = *(this + 4);
  if ( result )
  {
    switch ( (char)a2 )
    {
      case 0:
        result += 0xF;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 4:
        result += 0x10;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 5:
        result += 0xD;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 6:
        result += 6;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 7:
        result += 0xE;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 8:
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0xB:
        ++result;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0xD:
        result += 0x11;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x1A:
        result += 0xC;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x21:
        result += 0xB;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x24:
        result += 4;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x28:
        result += 2;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x29:
        result += 0xA;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x2E:
        result += 8;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x2F:
        result += 9;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x30:
        result += 3;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x31:
        result += 5;
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0x38:
        result += 7;
AVCollection_RemoveArrayNode___CheckIfArrayEmpty:
        AVCollection_DeallocArrayNode(result);
        v4 = *(this + 4);
        if ( *v4
          || v4[1]
          || v4[2]
          || v4[3]
          || v4[4]
          || v4[5]
          || v4[6]
          || v4[7]
          || v4[8]
          || v4[9]
          || v4[0xA]
          || v4[0xB]
          || v4[0xC]
          || v4[0xD]
          || v4[0xE]
          || v4[0xF]
          || v4[0x10]
          || v4[0x11] )
        {
          result = (unsigned int *)AVCollection_RemoveArrayNode_::Done_(a2);
        }
        else
        {
          if ( v4 )
          {
            AVCollection_DeleteArray(*(this + 4));
            FormHeapFree((unsigned int)v4);
          }
          *(this + 4) = 0;
          result = (unsigned int *)AVCollection_RemoveArrayNode_::Done_(a2);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
