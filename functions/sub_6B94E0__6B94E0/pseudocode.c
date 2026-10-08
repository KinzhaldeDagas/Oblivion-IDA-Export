// Destroys the singleton MenuTopicManager without closing IDA: clears owned MenuTopics, frees the manager, and nulls the singleton storage.
void sub_6B94E0()
{
  MenuTopicManagerView *v0; // esi

  v0 = (MenuTopicManagerView *)LODWORD(qword_B3BB2C[0x1BB]); /*0x6b94e1*/
  if ( LODWORD(qword_B3BB2C[0x1BB]) ) /*0x6b94e1*/
  {
    v0->speaker = 0; /*0x6b94ef*/
    MenuTopicManager::ClearData(v0, 1); /*0x6b94f6*/
    FormHeapFree((unsigned int)v0); /*0x6b94fc*/
    qword_B3BB2C[0x1BB] = 0.0; /*0x6b9504*/
  }
}
