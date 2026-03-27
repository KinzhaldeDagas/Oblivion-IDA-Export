int __usercall sub_6D6B20@<eax>(_DWORD *this@<ecx>, va_list a2@<edi>)
{
  char *v3; // eax
  int v4; // ecx
  int result; // eax
  size_t v6; // [esp-10h] [ebp-14h]
  size_t v7; // [esp-10h] [ebp-14h]
  size_t v8; // [esp-10h] [ebp-14h]
  size_t v9; // [esp-10h] [ebp-14h]
  size_t v10; // [esp-10h] [ebp-14h]

  if ( *(this + 0x15) )
    JUMPOUT(0x6D6BE2);
  v3 = (char *)FormHeapAlloc(0x32u);
  v4 = *(this + 0x14);
  *(this + 0x15) = v3;
  switch ( v4 )
  {
    case 0:
      HIDWORD(v6) = "%d-%d-TT_TRANSLATE_U";
      LODWORD(v6) = 0x32;
      sub_6C5D40(a2, v3, v6, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13));
      result = *(this + 0x15);
      break;
    case 1:
      HIDWORD(v7) = "%d-%d-TT_TRANSLATE_V";
      LODWORD(v7) = 0x32;
      sub_6C5D40(a2, v3, v7, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13));
      result = *(this + 0x15);
      break;
    case 2:
      HIDWORD(v8) = "%d-%d-TT_ROTATE";
      LODWORD(v8) = 0x32;
      sub_6C5D40(a2, v3, v8, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13));
      result = *(this + 0x15);
      break;
    case 3:
      HIDWORD(v9) = "%d-%d-TT_SCALE_U";
      LODWORD(v9) = 0x32;
      sub_6C5D40(a2, v3, v9, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13));
      result = *(this + 0x15);
      break;
    case 4:
      HIDWORD(v10) = "%d-%d-TT_SCALE_V";
      LODWORD(v10) = 0x32;
      sub_6C5D40(a2, v3, v10, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13));
      result = def_6D6B47();
      break;
    default:
      JUMPOUT(0x6D6BDF);
  }
  return result;
}
