// TES4 authoritative helper for inserting a non-player MobileObject into a process-level BSSimpleList. Supports front/back insertion and placement relative to another object; advances the list cursor after insertion.
void __thiscall ProcessLevelList_InsertMobileObject(
        void *this,
        MobileObject *object,
        bool append,
        bool insertRelative,
        MobileObject *relativeTo)
{
  _DWORD **v5; // esi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax

  v5 = (_DWORD **)this; /*0x67b26c*/
  if ( object != (MobileObject *)reference ) /*0x67b26e*/
  {
    if ( !insertRelative ) /*0x67b279*/
    {
      if ( append ) /*0x67b281*/
      {
        BSSimpleList_PushBack(*((_DWORD **)this + 2), (int)object); /*0x67b2aa*/
        object->process->GetCurHour(object->process); /*0x67b2b7*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)(*v5)[0x16] + 0x28))((*v5)[0x16]); /*0x67b2c5*/
      }
      else
      {
        BSSimpleList_PushFront(this, (int)object);// Release/front-insertion path uses BSSimpleList_PushFront. If the list is nonempty and its 8-byte node allocation fails, native code null-dereferences rather than returning an insertion failure. /*0x67b283*/
        object->process->GetCurHour(object->process); /*0x67b290*/
        v6 = *(_DWORD *)(*v5[2] + 0x58); /*0x67b299*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x28))(v6); /*0x67b2a1*/
      }
      goto LABEL_16; /*0x67b2a5*/
    }
    if ( this ) /*0x67b2cd*/
    {
      while ( 1 ) /*0x67b2d3*/
      {
        v7 = *((_DWORD *)this + 1); /*0x67b2d3*/
        if ( !v7 && !*(_DWORD *)this ) /*0x67b2dc*/
          goto LABEL_16; /*0x67b2dc*/
        if ( *(MobileObject **)this == relativeTo ) /*0x67b2e0*/
          break; /*0x67b2e0*/
        this = *((void **)this + 1); /*0x67b2e2*/
        if ( !v7 ) /*0x67b2e6*/
          goto LABEL_16; /*0x67b2e6*/
      }
      if ( !append ) /*0x67b2f0*/
      {
LABEL_15:
        BSSimpleList_PushFront(this, (int)object); /*0x67b2f8*/
        goto LABEL_16; /*0x67b2f8*/
      }
      if ( v7 ) /*0x67b2f4*/
      {
        this = *((void **)this + 1); /*0x67b2f6*/
        goto LABEL_15; /*0x67b2f6*/
      }
      BSSimpleList_PushBack(this, (int)object); /*0x67b30f*/
    }
LABEL_16:
    v8 = (_DWORD *)v5[2][1]; /*0x67b2fd*/
    if ( v8 ) /*0x67b305*/
      v5[2] = v8; /*0x67b307*/
  }
}
