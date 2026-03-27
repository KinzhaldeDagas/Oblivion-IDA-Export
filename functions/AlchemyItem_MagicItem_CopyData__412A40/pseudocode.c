_DWORD *__thiscall AlchemyItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
             &AlchemyItem `RTTI Type Descriptor',
             0);
  if ( result )
  {
    *(this + 0x15) = result[0x1E];
    *((_BYTE *)this + 0x58) = *((_BYTE *)result + 0x7C);
  }
  return result;
}
