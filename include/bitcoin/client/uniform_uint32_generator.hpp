/*
 * Copyright (c) 2011-2014 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin_client.
 *
 * libbitcoin_client is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBBITCOIN_CLIENT_UNIFORM_UINT32_GENERATOR_HPP
#define LIBBITCOIN_CLIENT_UNIFORM_UINT32_GENERATOR_HPP

#include <boost/random.hpp>
#include <bitcoin/client/random_number_generator.hpp>

namespace libbitcoin {
namespace client {

class uniform_uint32_generator : random_number_generator<uint32_t>
{
public:

    uniform_uint32_generator();

    virtual uint32_t operator()();

private:

    boost::random::mt19937 engine_;

    boost::random::uniform_int_distribution<uint32_t> distribution_;

    boost::random::variate_generator<
        boost::random::mt19937,
        boost::random::uniform_int_distribution<uint32_t>> source_;

};

}
}

#endif

