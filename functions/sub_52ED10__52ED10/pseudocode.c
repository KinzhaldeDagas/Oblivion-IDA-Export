// Clears only the runtime TESTopic* member of every fixed stock-dialogue registry slot; FormIDs and names remain intact for reconstruction.
void __cdecl ClearStockDialogueTopicPointers()
{
  int i; // eax
  signed int v1; // ecx
  int v2; // edx

  for ( i = 0; i < 7; ++i ) /*0x52ed10*/
  {
    v1 = 0; /*0x52ed13*/
    if ( (int)g_dialogueTopicBucketCounts[i] > 0 ) /*0x52ed1b*/
    {
      v2 = 0; /*0x52ed1d*/
      do /*0x52ed39*/
      {
        g_dialogueTopicBuckets[i][v2].topic = 0; /*0x52ed26*/
        ++v1; /*0x52ed2d*/
        ++v2; /*0x52ed30*/
      }
      while ( v1 < (int)g_dialogueTopicBucketCounts[i] ); /*0x52ed39*/
    }
  }
}
