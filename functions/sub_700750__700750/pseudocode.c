// Pass227: NiScreenTexture vtable +0x38 map insertion helper; inserts object into map context, not a draw call.
int __thiscall sub_700750(NiTriBasedGeomData *a2, int arg0)
{
  return NiTMap_SetAt(*(_DWORD **)(arg0 + 4), (int)a2, 1); /*0x70075f*/
}
