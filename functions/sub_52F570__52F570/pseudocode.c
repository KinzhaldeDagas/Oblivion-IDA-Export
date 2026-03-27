TESQuest *__thiscall sub_52F570(TESTopic *this, int a2)
{
  QuestInfoData **p_firstEntry; // edi
  QuestInfoData *v4; // esi
  UInt32 firstFreeEntry; // edx
  int v6; // eax

  if ( !a2 )
    return 0;
  p_firstEntry = &this->firstEntry;
  if ( this != (TESTopic *)0xFFFFFFD8 )
  {
    do
    {
      v4 = *p_firstEntry;
      if ( !*p_firstEntry )
        break;
      firstFreeEntry = v4->infoList.firstFreeEntry;
      p_firstEntry = (QuestInfoData **)p_firstEntry[1];
      if ( firstFreeEntry )
      {
        v6 = 0;
        while ( *((_DWORD *)&v4->infoList.data->conditions.data + v6) != a2 )
        {
          if ( ++v6 >= firstFreeEntry )
            goto LABEL_9;
        }
        return v4->parentQuest;
      }
LABEL_9:
      ;
    }
    while ( p_firstEntry );
  }
  return 0;
}
