// Return projectile-retained AlchemyItem poison at ArrowProjectile+0x84. The equipped weapon's poison extra is consumed at release.
AlchemyItem *__thiscall ArrowProjectile_GetPoison(ArrowProjectile *this)
{
  return this->poison; /*0x607416*/
}
