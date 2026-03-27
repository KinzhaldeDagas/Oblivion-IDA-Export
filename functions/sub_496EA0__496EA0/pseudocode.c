int __thiscall sub_496EA0(char *this, TESObjectCELL *a2)
{
  char v3; // bl
  struct _RTL_CRITICAL_SECTION *v4; // ebp
  int result; // eax
  DWORD CurrentThreadId; // [esp-8h] [ebp-20h]
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v3 = 1;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 0x80);
  while ( 1 )
  {
    NiEnterCriticalSection(v4, (int)&unk_A2F830);
    v7 = 0;
    v8 = 0;
    if ( sub_496DF0(this, (int)a2, &v7) )
    {
      if ( v7 != GetCurrentThreadId() )
        goto LABEL_7;
      sub_496D50(this, (int)a2, v7, v8 + 1);
    }
    else
    {
      CurrentThreadId = GetCurrentThreadId();
      sub_496D50(this, (int)a2, CurrentThreadId, 1);
    }
    v3 = 0;
LABEL_7:
    v4 = (struct _RTL_CRITICAL_SECTION *)(this + 0x80);
    result = NiLeaveCriticalSection_0((LPCRITICAL_SECTION)this + 4);
    if ( !v3 )
      return result;
    sub_498EE0(*((_DWORD *)this + 0x40), 1);
  }
}
