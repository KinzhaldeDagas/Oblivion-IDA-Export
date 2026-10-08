// AnimSequenceMultiple vtable helper used by first-person source sync. It scans list order and returns the first candidate whose path suffix beginning at the final backslash exactly matches the source suffix. The comparison is case-sensitive and includes the backslash plus full filename/extension.
BSAnimGroupSequence *__thiscall AnimSequenceMultiple_FindBySourceBasename(
        AnimSequenceMultiple *this,
        BSAnimGroupSequence *sourceSequence)
{
  NiTList_Entry *sequenceNode; // esi
  BSAnimGroupSequence *result; // eax
  unsigned __int8 *sourceSuffix; // ebx
  const char **candidateSequence; // edi
  unsigned __int8 *candidateSuffix; // eax

  sequenceNode = this->sequences->head; /*0x470c49*/
  result = (BSAnimGroupSequence *)strrchr(*((const char **)sourceSequence + 2), 0x5C);// Source BSAnimGroupSequence path must contain a backslash. Matching uses the suffix pointer returned by strrchr(path, '\\'), including the final backslash. /*0x470c52*/
  sourceSuffix = (unsigned __int8 *)result; /*0x470c57*/
  if ( result ) /*0x470c5e*/
  {
    if ( sequenceNode ) /*0x470c68*/
    {
      while ( 1 ) /*0x470c70*/
      {
        candidateSequence = (const char **)sequenceNode->data;// Walks AnimSequenceMultiple list order from the head; the first exact basename suffix match wins. /*0x470c70*/
        candidateSuffix = (unsigned __int8 *)strrchr(candidateSequence[2], 0x5C);// Candidate path must also contain a backslash; paths without one are skipped. /*0x470c79*/
        if ( candidateSuffix ) /*0x470c83*/
        {
          if ( !CRT_StricmpLocaleDispatch(candidateSuffix, sourceSuffix) ) /*0x470c87*/
            break;                              // Exact case-sensitive strcmp(candidateLastBackslash, sourceLastBackslash). Directory prefixes before the last backslash are ignored; filename, extension, and case are not. /*0x470c87*/
        }
        sequenceNode = sequenceNode->next; /*0x470c93*/
        if ( !sequenceNode ) /*0x470c97*/
          return 0; /*0x470c97*/
      }
      return (BSAnimGroupSequence *)candidateSequence; /*0x470ca1*/
    }
    else
    {
      return 0; /*0x470c99*/
    }
  }
  return result; /*0x470c60*/
}
