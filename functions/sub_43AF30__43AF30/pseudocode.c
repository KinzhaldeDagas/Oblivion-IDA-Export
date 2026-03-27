char __thiscall sub_43AF30(TESObjectREFR **this)
{
  TESObjectCELL *ParentCell; // eax
  char result; // al
  int v4; // esi
  char v5; // al
  char v6; // al
  _DWORD *v7; // ecx
  Ni2DBuffer *v8; // eax
  IOManager *v9; // esi
  int v10[5]; // [esp-4h] [ebp-14h] BYREF

  ParentCell = TESObjectREFR_GetParentCell(*(this + 8));
  result = TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0);
  if ( result )
  {
    v4 = 0;
    if ( !byte_B350D5 || (nullsub_returnTrue_0arg(), v5) )
    {
LABEL_7:
      if ( !(*(this + 8))->vtbl->IsActor(*(this + 8)) )
      {
        if ( sub_441E90(*(this + 8)) )
        {
          v7 = *(this + 8);
          if ( !v7[0xF] )
          {
            v8 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD *))(*v7 + 0x14C))(v7);
            NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, v8);
          }
        }
      }
    }
    else
    {
      while ( v4 < 3 )
      {
        Sleep(5u);
        ++v4;
        if ( byte_B350D5 )
        {
          nullsub_returnTrue_0arg();
          if ( !v6 )
            continue;
        }
        goto LABEL_7;
      }
    }
    v9 = ioManager;
    v10[0] = (int)this;
    v10[4] = (int)v10;
    InterlockedIncrement((volatile LONG *)this + 2);
    return sub_43A5F0(&v9->members.taskQueue->vtbl, v10[0]);
  }
  return result;
}
