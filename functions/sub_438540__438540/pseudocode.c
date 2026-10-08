// Releases a model-loader path reference. Used by AnimIdle/queued-loader cleanup when a KF/model reference is no longer needed.
void __thiscall ModelLoader_ReleaseModelPath(_DWORD *this, int a2, char a3)
{
  int v4; // ecx
  unsigned int *v5; // esi
  volatile LONG *v6; // [esp+Ch] [ebp-4h] BYREF

  v4 = *(this + 1); /*0x438549*/
  v6 = 0; /*0x438550*/
  if ( (*(unsigned __int8 (__thiscall **)(int, int, volatile LONG **))(*(_DWORD *)v4 + 4))(v4, a2, &v6) ) /*0x43855f*/
  {
    InterlockedDecrement(v6 + 3); /*0x43856d*/
    if ( a3 ) /*0x438578*/
    {
      if ( !*((_DWORD *)v6 + 3) ) /*0x43857e*/
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 0x10))(*(this + 1), a2); /*0x43858d*/
        v5 = (unsigned int *)v6; /*0x438595*/
        if ( v6 ) /*0x438597*/
        {
          sub_436CB0((unsigned int *)v6); /*0x438599*/
          FormHeapFree((unsigned int)v5); /*0x43859f*/
        }
      }
    }
  }
}
