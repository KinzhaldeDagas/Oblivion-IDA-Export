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

  if ( *(this + 0x15) ) /*0x6d6b23*/
    JUMPOUT(0x6D6BE2); /*0x6d6be2*/
  v3 = (char *)FormHeapAlloc(0x32u); /*0x6d6b30*/
  v4 = *(this + 0x14); /*0x6d6b35*/
  *(this + 0x15) = v3; /*0x6d6b3e*/
  switch ( v4 ) /*0x6d6b47*/
  {
    case 0: /*0x6d6b47*/
      HIDWORD(v6) = "%d-%d-TT_TRANSLATE_U"; /*0x6d6b57*/
      LODWORD(v6) = 0x32; /*0x6d6b5c*/
      sub_6C5D40(a2, v3, v6, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13)); /*0x6d6b5f*/
      result = *(this + 0x15); /*0x6d6b64*/
      break; /*0x6d6b6b*/
    case 1: /*0x6d6b47*/
      HIDWORD(v7) = "%d-%d-TT_TRANSLATE_V"; /*0x6d6b75*/
      LODWORD(v7) = 0x32; /*0x6d6b7a*/
      sub_6C5D40(a2, v3, v7, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13)); /*0x6d6b7d*/
      result = *(this + 0x15); /*0x6d6b82*/
      break; /*0x6d6b89*/
    case 2: /*0x6d6b47*/
      HIDWORD(v8) = "%d-%d-TT_ROTATE"; /*0x6d6b93*/
      LODWORD(v8) = 0x32; /*0x6d6b98*/
      sub_6C5D40(a2, v3, v8, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13)); /*0x6d6b9b*/
      result = *(this + 0x15); /*0x6d6ba0*/
      break; /*0x6d6ba7*/
    case 3: /*0x6d6b47*/
      HIDWORD(v9) = "%d-%d-TT_SCALE_U"; /*0x6d6bb1*/
      LODWORD(v9) = 0x32; /*0x6d6bb6*/
      sub_6C5D40(a2, v3, v9, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13)); /*0x6d6bb9*/
      result = *(this + 0x15); /*0x6d6bbe*/
      break; /*0x6d6bc5*/
    case 4: /*0x6d6b47*/
      HIDWORD(v10) = "%d-%d-TT_SCALE_V"; /*0x6d6bcf*/
      LODWORD(v10) = 0x32; /*0x6d6bd4*/
      sub_6C5D40(a2, v3, v10, (char *)*((unsigned __int8 *)this + 0x48), *(this + 0x13)); /*0x6d6bd7*/
      result = def_6D6B47((int)this); /*0x6d6bdd*/
      break; /*0x6d6bdd*/
    default:
      JUMPOUT(0x6D6BDF); /*0x6d6bdf*/
  }
  return result; /*0x6d6b6a*/
}
