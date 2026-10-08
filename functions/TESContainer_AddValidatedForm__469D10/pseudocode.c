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

  switch ( a2->member.type ) /*0x469d2b*/
  {
    case kFormType_Enchantment: /*0x469d2b*/
    case kFormType_Spell: /*0x469d2b*/
    case kFormType_Activator: /*0x469d2b*/
    case kFormType_Container: /*0x469d2b*/
    case kFormType_Door: /*0x469d2b*/
    case kFormType_Stat: /*0x469d2b*/
    case kFormType_Tree: /*0x469d2b*/
    case kFormType_LeveledSpell: /*0x469d2b*/
      result = 0; /*0x469d33*/
      break; /*0x469d36*/
    case kFormType_REFR: /*0x469d2b*/
      PrintError("Never call the third addobject with a reference. This item will not be added!"); /*0x469d3e*/
      result = 0; /*0x469d47*/
      break; /*0x469d4a*/
    default:
      v6 = a3; /*0x469d4e*/
      if ( !a3 ) /*0x469d55*/
      {
        v7 = a2->vtbl->super.GetEditorName(a2); /*0x469d61*/
        PrintError("Count of 0 not allowed on items. Fix the count on \"%s\".", v7); /*0x469d69*/
        v6 = 1; /*0x469d71*/
      }
      this->type |= 1u; /*0x469d76*/
      switch ( a2->member.type ) /*0x469d8d*/
      {
        case kFormType_Book: /*0x469d8d*/
        case kFormType_Clothing: /*0x469d8d*/
          TESEnchantableForm_GetFormEnchantment(a2); /*0x469d95*/
          break; /*0x469d95*/
        default:
          break;
      }
      p_list = &this->list; /*0x469d9d*/
      v9 = &this->list; /*0x469da0*/
      if ( this->list.data ) /*0x469da0*/
      {
        while ( 1 ) /*0x469da7*/
        {
          data = v9->data; /*0x469da7*/
          if ( (TESObject *)v9->data->type == a2 ) /*0x469dac*/
            break; /*0x469dac*/
          v9 = v9->next; /*0x469dae*/
          if ( !v9 ) /*0x469db3*/
          {
            if ( (TESObject *)data->type != a2 ) /*0x469db8*/
              goto TESContainer_AddValidatedForm___AddNewContentEntry; /*0x469db8*/
            break; /*0x469db8*/
          }
        }
        if ( a4 ) /*0x469dbf*/
        {
          data->count = v6; /*0x469dc2*/
          result = v6; /*0x469dc4*/
        }
        else
        {
          if ( v6 < 0 ) /*0x469dce*/
          {
            if ( data->count > 0 ) /*0x469dd4*/
              data->count = -data->count; /*0x469dd8*/
            v6 = -v6; /*0x469dda*/
          }
          count = data->count; /*0x469ddc*/
          if ( data->count < 0 ) /*0x469de0*/
            result = count - v6; /*0x469dee*/
          else
            result = v6 + count; /*0x469de3*/
          data->count = result; /*0x469de7*/
        }
      }
      else
      {
TESContainer_AddValidatedForm___AddNewContentEntry:
        v12 = (int *)FormHeapAlloc(8u); /*0x469df8*/
        v13 = 0; /*0x469dff*/
        if ( v12 ) /*0x469e06*/
        {
          v12[1] = 0; /*0x469e08*/
          *v12 = 1; /*0x469e0b*/
          v13 = v12; /*0x469e11*/
        }
        *v13 = v6; /*0x469e16*/
        v13[1] = (int)a2; /*0x469e18*/
        BSSimpleList_PushFront(p_list, (int)v13); /*0x469e1b*/
        result = *v13; /*0x469e20*/
      }
      break; /*0x469dc9*/
  }
  return result; /*0x469d32*/
}
