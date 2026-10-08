struct MenuVtbl
{
void (__thiscall *Destructor)(Menu *This, bool arg0);
void (__thiscall *AttachTileByID)(Menu *This, UInt32 idx, Tile *value); ///< Verified: vtable slot semantics established from DialogMenu implementations and native dispatch callers; Silt Strider decode 2026-10-07.
void (__thiscall *Unk_02)(Menu *This, UInt32 arg0, UInt32 arg1);
void (__thiscall *HandleClick)(Menu *This, UInt32 buttonID, Tile *clickedButton);
void (__thiscall *HandleMouseover)(Menu *This, UInt32 arg0, Tile *activeTile);
void (__thiscall *HandleMouseout)(Menu *This, unsigned int tileID, Tile *tile); ///< Verified: vtable slot semantics established from DialogMenu implementations and native dispatch callers; Silt Strider decode 2026-10-07.
void (__thiscall *Unk_06)(Menu *This, UInt32 arg0, UInt32 arg1, UInt32 arg2);
void (__thiscall *Unk_07)(Menu *This, UInt32 arg0, UInt32 arg1, UInt32 arg2);
void (__thiscall *Unk_08)(Menu *This, UInt32 arg0, UInt32 arg1);
void (__thiscall *Unk_09)(Menu *This, UInt32 arg0, UInt32 arg1);
void (__thiscall *Unk_0A)(Menu *This, UInt32 arg0, UInt32 arg1);
void (__thiscall *Unk_0B)(Menu *This);
bool (__thiscall *HandleKeyboardInput)(Menu *This, char inputChar);
UInt32 (__thiscall *GetID)(Menu *This);
bool (__thiscall *DoGamepad)(Menu *This, unsigned int button, float value); ///< Verified: vtable slot semantics established from DialogMenu implementations and native dispatch callers; Silt Strider decode 2026-10-07.
};
