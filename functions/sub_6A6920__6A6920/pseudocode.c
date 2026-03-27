int *__thiscall sub_6A6920(unsigned int *this, char a2)
{
  int *result; // eax
  int v4; // ebp
  _DWORD *v5; // edi
  NiObject *v6; // edi
  TESObjectREFR *v7; // eax
  NiObject *v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  float v12; // [esp+0h] [ebp-24h]

  result = *(int **)(*(this + 3) + 0x1C);
  v4 = result[0x1E];
  if ( v4 && *(this + 8) && *(this + 0xA) == 4 )
  {
    if ( a2 )
    {
      v5 = (_DWORD *)*(this + 0xD);
      if ( v5 )
      {
        result = (int *)BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)*(this + 0xD));
        if ( !(_BYTE)result )
          return result;
        BSSimpleList_Clear(v5);
        FormHeapFree(*(this + 0xD));
        *(this + 0xD) = 0;
      }
      v6 = (NiObject *)FormHeapAlloc(0x4Cu);
      if ( v6 )
      {
        v12 = flt_A30634;
        v7 = (TESObjectREFR *)(*(int (**)(void))(*(_DWORD *)*(this + 8) + 4))();
        v8 = MagicShaderHitEffect_constr_args2(v6, v7, v4, v12);
      }
      else
      {
        v8 = 0;
      }
      if ( ((unsigned __int8 (__thiscall *)(NiObject *))v8->__vftable[1].Load)(v8) )
      {
        sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v8);
        result = (int *)FormHeapAlloc(8u);
        if ( result )
        {
          *result = (int)v8;
          result[1] = 0;
          *(this + 0xD) = (unsigned int)result;
        }
        else
        {
          result = 0;
          *(this + 0xD) = 0;
        }
        v8[3].__vftable = (NiObjectVtbl *)this;
      }
      else
      {
        return ((int *(__thiscall *)(NiObject *, int))v8->__vftable->super.Destructor)(v8, 1);
      }
    }
    else
    {
      result = (int *)*(this + 0xD);
      if ( result )
      {
        do
        {
          if ( !result[1] && !*result )
            break;
          v9 = *result;
          *(_BYTE *)(v9 + 0x24) = 1;
          *(_DWORD *)(v9 + 0x18) = 0;
          result = (int *)result[1];
        }
        while ( result );
        BSSimpleList_Clear((_DWORD *)*(this + 0xD));
        FormHeapFree(*(this + 0xD));
        v10 = *(this + 8);
        *(this + 0xD) = 0;
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10);
        return (int *)sub_678E70((int *)&ActorProcessManager_ptr, v11, v4);
      }
    }
  }
  return result;
}
