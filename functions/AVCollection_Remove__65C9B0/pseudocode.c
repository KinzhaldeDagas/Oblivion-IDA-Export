void __thiscall AVCollection_Remove(unsigned int **this, _BYTE *a2)
{
  if ( a2 )
  {
    switch ( *a2 )
    {
      case 0:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xB:
      case 0xD:
      case 0x1A:
      case 0x21:
      case 0x24:
      case 0x28:
      case 0x29:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x38:
        AVCollection_RemoveArrayNode(this, *a2);
        break;
      case 9:
        *((float *)*(this + 2) + 1) = 0.0;
        break;
      case 0xA:
        *((float *)*(this + 3) + 1) = 0.0;
        break;
      default:
        BSSimpleList_Remove((int *)this, (int)a2);
        FormHeapFree((unsigned int)a2);
        break;
    }
  }
}
