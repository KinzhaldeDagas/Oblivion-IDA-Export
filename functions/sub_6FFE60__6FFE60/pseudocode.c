// Prepends a non-null NiTimeController to NiObjectNET's refcounted controller chain, first setting the controller's next link to the current head.
_DWORD *__thiscall NiObjectNET_AddController(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  Ni2DBuffer **v2; // esi
  _DWORD *result; // eax

  if ( a2 ) /*0x6ffe67*/
  {
    v2 = this + 3; /*0x6ffe6d*/
    sub_6C61E0(a2, (int)*(this + 3)); /*0x6ffe73*/
    return NiSmartPointer_Set__(v2, a2); /*0x6ffe7b*/
  }
  return result; /*0x6ffe81*/
}
