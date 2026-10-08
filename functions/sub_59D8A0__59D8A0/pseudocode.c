bool __thiscall DialogMenu::ValidateRequiredTiles(OblivionDialogMenuTileBindingsView *this)
{
  return this->topicPane_id1 /*0x59d8e4*/
      && this->responseText_id2
      && this->responseContinue_id4
      && this->goodbye_id3
      && this->tile_id5
      && this->tile_id6
      && this->persuade_id7
      && this->tile_id14
      && this->tile_id15
      && this->training_id9
      && this->barter_id8;
}
