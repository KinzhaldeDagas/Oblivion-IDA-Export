void __thiscall sub_4E6F30(int *this)
{
  int *v2; // ebx
  int *v3; // edi
  DWORD CurrentThreadId; // eax
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  TESObjectCELL *v7; // ecx
  char *v8; // edi
  TESWorldSpace *WorldSpace; // eax
  char *v10; // eax
  char *v11; // esi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  float *v14; // eax
  int *v16; // eax
  unsigned __int16 **v17; // [esp+4h] [ebp-4h] BYREF

  if ( *(this + 9) )
  {
    if ( TESObjectCELL_GetWorldSpace((TESObjectCELL *)*(this + 8)) )
    {
      v2 = this + 0xA;
      v3 = 0;
      EnterCriticalSection(&stru_B36000);
      CurrentThreadId = GetCurrentThreadId();
      ++dword_B3607C;
      dword_B36078 = CurrentThreadId;
      if ( this != (int *)0xFFFFFFD8 )
      {
        do
        {
          if ( !v2[1] && !*v2 )
            break;
          v5 = *v2;
          v6 = *(_WORD *)*v2;
          if ( v6 >= *((_WORD *)this + 0x18) )
          {
            if ( v3 )
            {
              BSSimpleList_Remove(v3, *v2);
              v2 = (int *)v3[1];
              FormHeapFree(v5);
            }
            else
            {
              v16 = (int *)*(this + 0xB);
              v2 = this + 0xA;
              if ( v16 )
              {
                *(this + 0xB) = v16[1];
                *v2 = *v16;
                FormHeapFree((unsigned int)v16);
              }
              else
              {
                *v2 = 0;
              }
              FormHeapFree(v5);
            }
          }
          else
          {
            v7 = (TESObjectCELL *)*(this + 8);
            v8 = *(char **)(*(_DWORD *)(*(this + 9) + 4) + 4 * v6);
            v17 = 0;
            WorldSpace = TESObjectCELL_GetWorldSpace(v7);
            v10 = sub_4E6DF0((float *)(v5 + 4), WorldSpace, &v17, this);
            v11 = v10;
            if ( v10 )
            {
              if ( v10 != v8 )
              {
                if ( v17 )
                {
                  if ( !sub_4E7F80(v8, (int)v10) )
                  {
                    v12 = (_DWORD *)sub_4E7DE0(v8);
                    BSSimpleList_PushFront(v12, (int)v11);
                  }
                  if ( !sub_4E7F80(v11, (int)v8) )
                  {
                    v13 = (_DWORD *)sub_4E7DE0(v11);
                    BSSimpleList_PushFront(v13, (int)v8);
                    v14 = (float *)sub_4BEF40(v8);
                    sub_4E4FE0(v17, (int)v11, v14);
                  }
                }
              }
            }
            v3 = v2;
            v2 = (int *)v2[1];
          }
        }
        while ( v2 );
      }
      if ( dword_B3607C-- == 1 )
        dword_B36078 = 0;
      LeaveCriticalSection(&stru_B36000);
    }
  }
}
