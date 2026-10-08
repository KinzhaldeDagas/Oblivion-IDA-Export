_DWORD *__thiscall AlchemyItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast( /*0x412a56*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
             &AlchemyItem `RTTI Type Descriptor',
             0);
  if ( result ) /*0x412a60*/
  {
    *(this + 0x15) = result[0x1E]; /*0x412a65*/
    *((_BYTE *)this + 0x58) = *((_BYTE *)result + 0x7C); /*0x412a6b*/
  }
  return result; /*0x412a6e*/
}
