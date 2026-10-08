// Verified instruction-level duplicate branch: accepts only signed category0..5; lazily allocates list head; absent pointer is pushed. If SAME pointer is already in list (446C30 pointer-equality membership), code destroys/frees incoming pointer WITHOUT unlink here. Do not describe this as safe idempotent insertion; caller uniqueness requirement/duplicate reachability Unknown. No runtime patch made.
void __thiscall ActorProcessManager_AddCrime(ActorProcessManager *self, Crime *crime)
{
  OblivionCrimeType category; // eax
  CrimeListNode *v4; // esi
  CrimeListNode *v5; // eax

  if ( crime ) /*0x675b3a*/
  {
    category = crime->category; /*0x675b3c*/
    if ( (unsigned int)category <= kCrime_StealHorse ) /*0x675b42*/
    {
      v4 = self->crimeLists[category]; /*0x675b4a*/
      if ( !v4 ) /*0x675b50*/
      {
        v5 = (CrimeListNode *)FormHeapAlloc(8u); /*0x675b54*/
        if ( v5 ) /*0x675b5e*/
        {
          v5->crime = 0; /*0x675b60*/
          v5->next = 0; /*0x675b62*/
          v4 = v5; /*0x675b65*/
        }
        else
        {
          v4 = 0; /*0x675b69*/
        }
        self->crimeLists[crime->category] = v4; /*0x675b6e*/
      }
      if ( BSSimpleList::Contains((BSSimpleList_VoidPtr *)v4, crime) ) /*0x675b75*/
      {
        Crime_Destructor(crime); /*0x675b8e*/
        FormHeapFree((unsigned int)crime); /*0x675b94*/
      }
      else
      {
        BSSimpleList_PushFront(v4, (int)crime); /*0x675b81*/
      }
    }
  }
}
