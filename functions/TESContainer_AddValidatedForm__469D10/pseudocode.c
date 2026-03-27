int __thiscall TESContainer_AddValidatedForm(TESContainer *this, TESObject *a2, int a3, bool a4)
{
  int result; // eax
  int v6; // ebx
  const char *v7; // eax
  TESContainer_Entry *p_list; // ebp
  TESContainer_Entry *v9; // eax
  TESContainer_Data *data; // esi
  SInt32 count; // eax
  int *v12; // eax
  int *v13; // esi

  switch ( a2->member.type )
  {
    case kFormType_Enchantment:
    case kFormType_Spell:
    case kFormType_Activator:
    case kFormType_Container:
    case kFormType_Door:
    case kFormType_Stat:
    case kFormType_Tree:
    case kFormType_LeveledSpell:
      result = 0;
      break;
    case kFormType_REFR:
      PrintError("Never call the third addobject with a reference. This item will not be added!");
      result = 0;
      break;
    default:
      v6 = a3;
      if ( !a3 )
      {
        v7 = a2->vtbl->super.GetEditorName(a2);
        PrintError("Count of 0 not allowed on items. Fix the count on \"%s\".", v7);
        v6 = 1;
      }
      this->type |= 1u;
      switch ( a2->member.type )
      {
        case kFormType_Book:
        case kFormType_Clothing:
          TESEnchantableForm_GetFormEnchantment(a2);
          break;
        default:
          break;
      }
      p_list = &this->list;
      v9 = &this->list;
      if ( this->list.data )
      {
        while ( 1 )
        {
          data = v9->data;
          if ( (TESObject *)v9->data->type == a2 )
            break;
          v9 = v9->next;
          if ( !v9 )
          {
            if ( (TESObject *)data->type != a2 )
              goto TESContainer_AddValidatedForm___AddNewContentEntry;
            break;
          }
        }
        if ( a4 )
        {
          data->count = v6;
          result = v6;
        }
        else
        {
          if ( v6 < 0 )
          {
            if ( data->count > 0 )
              data->count = -data->count;
            v6 = -v6;
          }
          count = data->count;
          if ( data->count < 0 )
            result = count - v6;
          else
            result = v6 + count;
          data->count = result;
        }
      }
      else
      {
TESContainer_AddValidatedForm___AddNewContentEntry:
        v12 = (int *)FormHeapAlloc(8u);
        v13 = 0;
        if ( v12 )
        {
          v12[1] = 0;
          *v12 = 1;
          v13 = v12;
        }
        *v13 = v6;
        v13[1] = (int)a2;
        BSSimpleList_PushFront(p_list, (int)v13);
        result = *v13;
      }
      break;
  }
  return result;
}
