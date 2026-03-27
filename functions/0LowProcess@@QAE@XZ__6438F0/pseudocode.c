LowProcess *__thiscall LowProcess::LowProcess(LowProcess *this)
{
  double v2; // st7

  sub_60CD90(this);
  this->__vftable = (LowProcess_vtbl *)&LowProcess::`vftable';
  this->unk03C = 0;
  this->unk040 = 0;
  this->unk04C = 0;
  this->unk050 = 0;
  this->unk054 = 0;
  this->unk058 = 0;
  this->unk05C = 0;
  this->unk060 = 0;
  AVCollection_Constr(&this->avDamageModifiers.avList.entry);
  v2 = flt_A30634;
  this->curHour = flt_A30634;
  this->editorPackage = 0;
  this->unk00C = v2;
  this->pathing = 0;
  this->editorPackProcedure = kProcedure_TRAVEL;
  this->unk010 = 0.0;
  this->follow = 0;
  this->unk028 = 0.0;
  this->curPackedDate = 0;
  this->unk08C = 0.0;
  this->unk01C = 0;
  this->unk01D = 0;
  this->unk044 = 0;
  this->unk048 = 0;
  this->unk030 = 0;
  this->unk084 = 0;
  this->isAlerted = 0;
  this->unk020 = 0;
  this->unk064 = 0;
  this->unk068 = 0;
  this->unk06C = 0;
  this->usedItem = 0;
  this->unk038 = 0;
  this->unk01E = 0;
  return this;
}
