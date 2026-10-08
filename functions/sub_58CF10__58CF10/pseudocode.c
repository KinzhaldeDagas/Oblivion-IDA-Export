// Verified wrapper: gets/creates destination trait Value and forwards source tile/source trait/operator to Value::AddReferenceAction. Called from ConnectTraitsToTree after GetTileByName resolves source.
void *__thiscall Tile::AddReferenceAction(
        Tile *this,
        unsigned int destinationTrait,
        Tile *source,
        unsigned int sourceTrait,
        unsigned int action)
{
  OblivionTileValueView *Value; // eax

  Value = Tile::GetOrCreateValue(this, destinationTrait); /*0x58cf24*/
  return Tile::Value::AddReferenceAction(Value, source, sourceTrait, action); /*0x58cf30*/
}
