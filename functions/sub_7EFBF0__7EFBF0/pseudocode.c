UInt32 __thiscall sub_7EFBF0(BSShaderProperty *this, BSShaderProperty *clone, void *cloneProcess)
{
  UInt32 result; // eax
  NiTList_Entry_NiProperty *end; // ebx

  BSShaderProperty_CopyCloneMembers(this, clone, cloneProcess); /*0x7efbff*/
  clone[1].vtbl = *((void ***)this + 0x1B); /*0x7efc07*/
  clone[1].member.super.super.m_controller = *((NiInterpController **)this + 0x1E); /*0x7efc0d*/
  clone[1].member.super.super.m_extraDataList = *((NiExtraData ***)this + 0x1F); /*0x7efc13*/
  *(_DWORD *)&clone[1].member.super.super.m_extraDataListLen = *((_DWORD *)this + 0x20); /*0x7efc1c*/
  *(_DWORD *)&clone[1].member.super.flags = *((_DWORD *)this + 0x21); /*0x7efc28*/
  clone[1].member.passInfo = *((_DWORD *)this + 0x22); /*0x7efc34*/
  clone[1].member.alpha = *((float *)this + 0x23); /*0x7efc40*/
  clone[1].member.lastRenderPassState = *((_DWORD *)this + 0x24); /*0x7efc4c*/
  result = *((_DWORD *)this + 0x25); /*0x7efc52*/
  clone[1].member.passes.vtlb = (void **)result; /*0x7efc58*/
  clone[1].member.passes.start = *((NiTList_Entry_NiProperty **)this + 0x26); /*0x7efc64*/
  end = clone[1].member.passes.end; /*0x7efc6a*/
  if ( end == *((NiTList_Entry_NiProperty **)this + 0x27) ) /*0x7efc76*/
  {
    clone[1].member.passes.numItems = *((_DWORD *)this + 0x28); /*0x7efcdc*/
  }
  else
  {
    if ( end ) /*0x7efc7a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&end->prev) ) /*0x7efc80*/
        ((void (__thiscall *)(NiTList_Entry_NiProperty *, int))end->next->next)(end, 1); /*0x7efc96*/
    }
    result = *((_DWORD *)this + 0x27); /*0x7efc98*/
    clone[1].member.passes.end = (NiTList_Entry_NiProperty *)result; /*0x7efca0*/
    if ( result ) /*0x7efca6*/
    {
      InterlockedIncrement((volatile LONG *)(result + 4)); /*0x7efcac*/
      result = *((_DWORD *)this + 0x28); /*0x7efcb2*/
      clone[1].member.passes.numItems = result; /*0x7efcb8*/
    }
    else
    {
      clone[1].member.passes.numItems = *((_DWORD *)this + 0x28); /*0x7efcca*/
    }
  }
  return result; /*0x7efcbe*/
}
