void __thiscall sub_630090(HighProcess *this, void *a2)
{
  Node190 *v3; // eax

  if ( a2 )
  {
    if ( this->unk190.data )
    {
      v3 = (Node190 *)FormHeapAlloc(8u);
      if ( v3 )
      {
        v3->data = this->unk190.data;
        v3->next = 0;
      }
      else
      {
        v3 = 0;
      }
      v3->next = this->unk190.next;
      this->unk190.next = v3;
    }
    this->unk190.data = a2;
  }
}
