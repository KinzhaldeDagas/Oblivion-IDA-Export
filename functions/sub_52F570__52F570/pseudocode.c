TESQuest *__thiscall TESTopic::GetOwnerQuest(TESTopic *this, OblivionTopicInfo *info)
{
  QuestInfoEntry *p_questInfoEntries; // edi
  QuestInfoData *data; // esi
  unsigned int firstFreeEntry; // edx
  int v6; // eax

  if ( !info ) /*0x52f577*/
    return 0; /*0x52f579*/
  p_questInfoEntries = &this->questInfoEntries; /*0x52f581*/
  if ( this != (TESTopic *)0xFFFFFFD8 ) /*0x52f586*/
  {
    do /*0x52f588*/
    {
      data = p_questInfoEntries->data; /*0x52f588*/
      if ( !p_questInfoEntries->data ) /*0x52f588*/
        break; /*0x52f588*/
      firstFreeEntry = data->infoList.firstFreeEntry; /*0x52f58e*/
      p_questInfoEntries = p_questInfoEntries->next; /*0x52f593*/
      if ( firstFreeEntry ) /*0x52f596*/
      {
        v6 = 0; /*0x52f598*/
        while ( data->infoList.data[v6] != info ) /*0x52f5ae*/
        {
          if ( ++v6 >= firstFreeEntry ) /*0x52f5b5*/
            goto LABEL_9; /*0x52f5b5*/
        }
        return data->parentQuest; /*0x52f5c3*/
      }
LABEL_9:
      ; /*0x52f5b9*/
    }
    while ( p_questInfoEntries ); /*0x52f588*/
  }
  return 0; /*0x52f57b*/
}
