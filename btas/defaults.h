/*
 * defaults.h
 *
 *  Created on: Dec 19, 2013
 *      Author: evaleev
 */

#ifndef BTAS_DEFAULTS_H_
#define BTAS_DEFAULTS_H_

#ifdef HAVE_BOOST_CONTAINER
#include <boost/container/small_vector.hpp>
#else
#include <btas/varray/varray.h>
#endif

//
//  Default index type
//

namespace btas {
namespace DEFAULT {

/// default index type
#ifdef HAVE_BOOST_CONTAINER
template <typename Integer> using index = boost::container::small_vector<Integer, BTAS_TARGET_MAX_INDEX_RANK>;
#else
template <typename Integer> using index = btas::varray<Integer>;
#endif
using index_type = index<long>;

/// default storage class
template <typename _T>
using storage = std::vector<_T>;
}
}  // namespace btas

#endif /* BTAS_DEFAULTS_H_ */
