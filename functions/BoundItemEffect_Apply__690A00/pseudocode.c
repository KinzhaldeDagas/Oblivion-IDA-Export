void __usercall BoundItemEffect_Apply(ActiveEffect *this@<ecx>, char a2@<bpl>, double a3@<st0>)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // eax
  MagicItem *item; // ecx
  int v7; // edi
  int StrongestItem; // ebp
  const char *v9; // eax
  int v10; // ebx
  double v11; // st7
  int v12; // eax

  target = this->members.target;
  if ( target )
    ParentActor = MagicTarget_GetParentActor(target);
  else
    ParentActor = 0;
  if ( !*((_DWORD *)this + 0xE) || !ParentActor )
  {
    ActiveEffect_Base_Remove(this, a2, a3, 0);
    return;
  }
  item = this->members.item;
  if ( item )
  {
    if ( this->members.effectItem )
    {
      v7 = MagicItem_GetFXEffect(item, 0) + 0x18;
      StrongestItem = EffectItemList_GetStrongestItem(this->members.effectItem->range, 0);
      if ( sub_449190(v7) )
      {
        v9 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x14))(v7);
        v10 = sub_439EB0((int *)ModelLoaderPtr, v9, 0, 0, 1);
        if ( (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)this->members.item + 0x18))(this->members.item) == 4 )
        {
          v11 = 0.0;
        }
        else
        {
          if ( !v10 )
            goto LABEL_14;
          v11 = sub_480B00(v7, v10, (int)"SpecialIdle_HitEffect", aHit);
        }
        *((float *)this + 0x20) = v11;
LABEL_14:
        if ( this->members.effectItem != (EffectItem *)StrongestItem )
        {
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x14))(v7);
          QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v12, 0, 1);
        }
      }
    }
  }
}
